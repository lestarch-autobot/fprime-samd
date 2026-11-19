// ======================================================================
// \title Os/Stub/Console.cpp
// \brief stub implementation for Os::Console
// ======================================================================
#include <Fw/Types/Assert.hpp>
#include <fprime-samd/Os/Console.hpp>

namespace Os {
namespace Samd21 {

void StreamConsoleHandle::setStreamHandler() {}

void StreamConsole::writeMessage(const CHAR* message, const FwSizeType size) {
    FW_ASSERT(message != nullptr || size == 0);
    (void)message;
}

ConsoleHandle* StreamConsole::getHandle() {
    return &this->m_handle;
}

}  // namespace Samd21
}  // namespace Os
