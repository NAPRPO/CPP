//
// Created by Narayan Prasad Pokhrel on 2019-03-26.
//

#ifndef NESTED_OUTER_H
#define NESTED_OUTER_H

class Outer{
    class Inner{
        const double    a;
        const double    b;
        Outer*          p;
    public:
        Inner (const double a, const double b, Outer* p): a(a), b(b), p(p){}
        double value(const double x) const;
    };

    const double a1;
    const double a2;
    const double da;
public:
    Outer(const double a1, const double a2, const double da);
    void    display(void);
};


#endif //NESTED_OUTER_H
