#include "pch.h"
#include "BCryptLib.h"
#include "BCrypt.hpp"
#include <iostream>

std::string BCryptLib::generateHash(const std::string& password, int workFactor) {
    return BCrypt::generateHash(password, workFactor);
}

bool BCryptLib::validatePassword(const std::string& password, const std::string& hash) {
    return BCrypt::validatePassword(password, hash);
}
