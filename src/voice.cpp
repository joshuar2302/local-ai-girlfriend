// voice.cpp — part of local-ai-girlfriend.

#include "localaigirlfriend/voice.h"

#include <cstdio>

namespace localaigirlfriend {

Voice::Voice(const std::string& config_path)
    : config_path_(config_path) {}

void Voice::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Voice::run() {
    if (verbose_) std::fprintf(stderr, "[local-ai-girlfriend] voice: run\n");
    // core logic lives here
    return true;
}

}  // namespace localaigirlfriend
