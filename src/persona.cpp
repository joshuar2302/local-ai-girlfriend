// persona.cpp — part of local-ai-girlfriend.

#include "localaigirlfriend/persona.h"

#include <cstdio>

namespace localaigirlfriend {

Persona::Persona(const std::string& config_path)
    : config_path_(config_path) {}

void Persona::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Persona::run() {
    if (verbose_) std::fprintf(stderr, "[local-ai-girlfriend] persona: run\n");
    // core logic lives here
    return true;
}

}  // namespace localaigirlfriend
