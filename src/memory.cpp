// memory.cpp — part of local-ai-girlfriend.

#include "localaigirlfriend/memory.h"

#include <cstdio>

namespace localaigirlfriend {

Memory::Memory(const std::string& config_path)
    : config_path_(config_path) {}

void Memory::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Memory::run() {
    if (verbose_) std::fprintf(stderr, "[local-ai-girlfriend] memory: run\n");
    // core logic lives here
    return true;
}

}  // namespace localaigirlfriend
