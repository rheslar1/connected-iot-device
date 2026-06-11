# Connected IoT Device Design Package

## Purpose

RTOS-based sensor node with MQTT cloud integration, signed OTA updates, low-power operating modes, and TLS-backed device identity.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/connected-iot-device` |
| Primary stack | C++17, C++ Design Patterns, SOLID, FreeRTOS/Zephyr, MQTT, TLS, OTA, Low power modes, Device identity |
| Review proof point | End-to-end connected-device architecture, secure cloud messaging, field-update readiness, and measured battery-aware behavior. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
