FidelityFX FSR4 Minimal Sample (scaffold)

But: small sample to validate FSR4 headers and quick build.

Build (out-of-source, using CMake):

mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release

Notes:
- This sample only demonstrates inclusion of the FSR Upscaler headers and a tiny runtime check.
- The CMake sets include paths relative to the repository layout; ensure you run CMake from the repository.
- On Windows you can open a Developer Command Prompt and run the same CMake commands, or generate a Visual Studio solution with CMake via `-G "Visual Studio 17 2022"`.
