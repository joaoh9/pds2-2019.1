#include <iostream>
#include "Classes.hpp"

using namespace std;

int main() {
    ClasseBase base;
    base.var_public = 1;
    base.setPrivate(2);
    base.setProtected(3);

    ClassePublica pub = ClassePublica(1, 2, 3);

    ClassePrivada pri = ClassePrivada(1, 2, 3);

    OverloadPrivada over;
    over.var_public = 1;
    over.setPrivate(2);
    over.setProtected(3);

    A2 a2;
    a2.setPublic(1);
    a2.setPrivate1(2);
    a2.setProtected1(3);
    a2.var_public2 = 1;
    a2.setPrivate2(2);
    a2.setProtected2(3);

    A3 a3;
    a3.setPublic(1);
    a3.setPrivate1(2);
    a3.setProtected1(3);
    a3.var_public2 = 1;
    a3.setPrivate2(2);
    a3.setProtected2(3);
    a3.var_public3 = 1;
    a3.setPrivate3(2);
    a3.setProtected3(3);

    cout << base.var_public << endl;
    cout << base.getPrivate() << endl;
    cout << base.getProtected() << endl;

    cout << pub.var_public << endl;
    cout << "Inacessivel" << endl;
    cout << pub.getProtected() << endl;

    cout << pri.getPublic_p() << endl;
    cout << pri.getPrivate_p() << endl;
    cout << pri.getProtected_p() << endl;

    cout << over.var_public << endl;
    cout << over.getPrivate() << endl;
    cout << over.getProtected() << endl;

    cout << a2.getPublic1() << endl;
    cout << a2.getPrivate1() << endl;
    cout << a2.getProtected1() << endl;

    cout << a2.var_public2 << endl;
    cout << a2.getPrivate2() << endl;
    cout << a2.getProtected2() << endl;

    cout << "Inacessivel" << endl;
    cout << a3.getPrivate1() << endl;
    cout << "Inacessivel" << endl;

    cout << a3.var_public2 << endl;
    cout << "Inacessivel" << endl;
    cout << a3.getProtected2() << endl;

    cout << a3.var_public3 << endl;
    cout << a3.getPrivate3() << endl;
    cout << a3.getProtected3() << endl;
}

/*
[1] --------------------
1
2
3
[2] --------------------
1
Inacessivel
3
[3] --------------------
1
Inacessivel
3
[4] --------------------
1
2
3
[5] --------------------
1
Inacessivel
3
[6] --------------------
1
2
3
[7] --------------------
Inacessivel
Inacessivel
Inacessivel
[8] --------------------
1
Inacessivel
3
[9] --------------------
1
2
3
*/
