// memory — part of local-ai-girlfriend.

#pragma once

#include <string>
#include <vector>

namespace localaigirlfriend {

class Memory {
public:
    explicit Memory(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace localaigirlfriend
