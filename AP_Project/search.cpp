#include <QtCore>

template <typename T>
bool search_open(T p1, T p2)
{
    QString sp1 = QVariant(p1).toString();
    QString sp2 = QVariant(p2).toString();
    if(sp2.size() < sp1.size())
        return false;
    for(int i =0; i < sp1.size(); i++)
    {
        if(sp1[i] != sp2[i])
            return false;
    }
    return true;
}
