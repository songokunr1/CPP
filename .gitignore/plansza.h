#ifndef PLANSZA_H
#define PLANSZA_H


class Plansza
{
    public:
        int rozmiar;
        Plansza(int roz)
        {
            rozmiar = roz;
        }
        Plansza();
        int wypisz();
        void wybierz_pole();
    protected:
    private:
};

#endif // PLANSZA_H
