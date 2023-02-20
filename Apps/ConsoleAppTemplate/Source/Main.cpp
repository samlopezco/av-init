#include <juce_core/juce_core.h>

int main()
{
    // juce::Logger::writeToLog("Hello World");
    // get JUCE version
    juce::String juceVersion = juce::SystemStats::getJUCEVersion();
    juce::Logger::writeToLog(juceVersion);

    // get OS version
    juce::String osVersion = juce::SystemStats::getOperatingSystemName();
    juce::Logger::writeToLog(osVersion);

    // get CPU info
    juce::String cpuInfo = juce::SystemStats::getCpuVendor();
    juce::Logger::writeToLog(cpuInfo);

    return 0;
}
