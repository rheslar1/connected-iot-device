#include <array>
#include <cassert>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "Connected IoT Device",
  "RTOS-based sensor node with MQTT cloud integration, signed OTA updates, low-power operating modes, and TLS-backed device identity.",
  "End-to-end connected-device architecture, secure cloud messaging, field-update readiness, and measured battery-aware behavior.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "FreeRTOS/Zephyr",
    "MQTT",
    "TLS",
    "OTA",
    "Low power modes",
    "Device identity"
  }
};

int main() {
  const RequiredEvidenceRule rule;
  assert(!profile.title.empty());
  assert(!profile.summary.empty());
  assert(rule.passes(profile.evidenceTarget));
  assert(profile.tags[0] == "C++17");
  return 0;
}
