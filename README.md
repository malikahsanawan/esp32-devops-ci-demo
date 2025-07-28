
# ESP32 DevOps CI Demo

This repo demonstrates:

- Building ESP32 firmware via PlatformIO in GitHub Actions  
- Static code analysis with cppcheck  
- Uploading firmware binary as CI artifact

## Usage

1. Clone this repo
2. Push to your GitHub under `main`
3. The CI pipeline will auto-run on every push
4. Check Actions → build → the firmware artifact

## Next Steps to Add:

- Unit tests with Unity/Ceedling
- Hardware-in-the-loop (HIL) testing via PyTest
- OTA deployment (e.g., AWS IoT / Mender)
- Docker-based CI container for environment consistency
