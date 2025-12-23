param([string]$f, [string]$i)
c++ "$f.cpp" -o "$f.exe" -O2 --std=c++20 -Wall -DDEBUG "-Wl,-stack,8388608"
if ($i) {
  Get-Content $i | & "./$f.exe"
} else {
  & "./$f.exe"
}