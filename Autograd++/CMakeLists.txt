# CMakeList.txt: CMake-Projekt für "Autograd++". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (Autograd++ "src/Autograd++.cpp" "include/Autograd++.h" "include/DualNumber.h" "src/main.cpp" "src/test.cpp" "src/DualNumber.cpp" "include/DualMath.h" "src/DualMath.cpp")

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
