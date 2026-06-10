# Connected IoT Device

RTOS-based sensor node with MQTT cloud integration, signed OTA updates, low-power operating modes, and TLS-backed device identity.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- FreeRTOS/Zephyr
- MQTT
- TLS
- OTA
- Low power modes
- Device identity

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/connected_iot_device
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

End-to-end connected-device architecture, secure cloud messaging, field-update readiness, and measured battery-aware behavior.

## Remote

Intended public repository: https://github.com/rheslar1/connected-iot-device
