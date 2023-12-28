#include <iostream>




int main()
{
    // f = m + n/(p + q/(r + s/t))

    int f, m, n, p, q, r, s, t;

    std::cin >> m >> n >> p >> q >> r >> s >> t;

    f = m + (n / (p + q) / (r + s/t));
    std::cout << f;

    return 0;
}
