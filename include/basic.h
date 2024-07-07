/**
 * @file basic.h
 *
 * @brief Basic object.
 */
#ifndef BASIC_H
#define BASIC_H

#include "common.h"
#include <splice/sidebag.h>

/**
 * @brief Basic object.
 *
 * Base class for most objects.
 */
struct BASIC
{
    int field_0x0;
    CSidebag *psidebag;
};

#endif // BASIC_H
