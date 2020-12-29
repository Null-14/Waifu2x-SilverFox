#include "SilverFoxPCH.h"
#include "utils.hpp"

void utils::CreateErrorMessageBox(const wchar_t* message)
{
    MessageBox(NULL, message, L"Error!",
        MB_ICONEXCLAMATION | MB_OK);
}
