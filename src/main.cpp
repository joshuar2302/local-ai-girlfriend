// main.cpp — entry point. Wires config and subsystems together.

#include "localaigirlfriend/settings.h"
#include "localaigirlfriend/persona.h"
#include "localaigirlfriend/memory.h"
#include "localaigirlfriend/voice.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    localaigirlfriend::Settings settings = localaigirlfriend::Settings::load_default();
    localaigirlfriend::Persona persona(settings.store_path);
    localaigirlfriend::Memory memory(settings.store_path);
    localaigirlfriend::Voice voice(settings.store_path);
    std::fprintf(stderr, "[local-ai-girlfriend] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
