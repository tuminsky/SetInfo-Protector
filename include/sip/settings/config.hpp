#include "sip/settings/server.hpp"
#include "sip/settings/address.hpp"

#include <vector>
#include <string_view>
#include <filesystem>

#include <nlohmann/json.hpp>

namespace sip::settings {

using Config = std::vector<Server>;

auto parse_config(const std::filesystem::path& path) -> Config;

auto get_info_by_address(const Config& config, const Address& address) -> std::vector<Info>;

auto get_address_from_node(uint32_t unIPServer, std::uint16_t usPortServer) -> Address;

} // namespace sip::settings
