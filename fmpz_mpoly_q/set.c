/*
    Copyright (C) 2020 Fredrik Johansson

    This file is part of Calcium.

    Calcium is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "fmpz_mpoly_q.h"

void
fmpz_mpoly_q_set(fmpz_mpoly_q_t res, const fmpz_mpoly_q_t x, const fmpz_mpoly_ctx_t ctx)
{
    if (res != x)
    {
        fmpz_mpoly_set(fmpz_mpoly_q_numref(res), fmpz_mpoly_q_numref(x), ctx);
        fmpz_mpoly_set(fmpz_mpoly_q_denref(res), fmpz_mpoly_q_denref(x), ctx);
    }
}

