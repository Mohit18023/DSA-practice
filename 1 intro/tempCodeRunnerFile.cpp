int mask = 1;

    while (mask < x)
        mask = (mask << 1) + 1;

    return mask ^ x;