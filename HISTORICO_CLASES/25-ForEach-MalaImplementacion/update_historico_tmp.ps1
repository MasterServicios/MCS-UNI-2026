$baseDir = "d:\BACKUP 2024\Downloads\23. UNI CC INTRODUCCIN A LA ESTRUCTURA DE DATOS  GITHUB\MCS-UNI-2026"
$historicoDir = Join-Path $baseDir "HISTORICO_CLASES"

# Get branches from upstream that start with digits
$branches = git branch -r | Select-String "upstream/(\d+-.+)" | ForEach-Object { $_.Matches.Groups[1].Value }

# Get already archived branches
$existing = Get-ChildItem $historicoDir | Select-Object -ExpandProperty Name

# Determine missing ones
$missing = $branches | Where-Object { $existing -notcontains $_ }

if ($missing.Count -eq 0) {
    Write-Host "No missing branches found in HISTORICO_CLASES."
    exit
}

Write-Host "Found missing branches: $($missing -join ', ')"

# Save current branch
$currentBranch = (git branch --show-current)

foreach ($branch in $missing) {
    Write-Host "Archiving branch: $branch"
    
    # Checkout branch (without creating local branch if possible, or just checkout)
    git checkout "upstream/$branch"
    
    $targetFolder = Join-Path $historicoDir $branch
    if (-not (Test-Path $targetFolder)) {
        New-Item -ItemType Directory -Path $targetFolder
    }
    
    # Copy files excluding .git and other folders/files
    $exclude = @(".git", "HISTORICO_CLASES", "TAREA A PRESENTAR", "main.ilk", "main.pdb", "vc140.pdb")
    Get-ChildItem -Path $baseDir -Exclude $exclude | Copy-Item -Destination $targetFolder -Recurse -Force
}

# Return to original branch
git checkout $currentBranch
Write-Host "Update of HISTORICO_CLASES complete."
