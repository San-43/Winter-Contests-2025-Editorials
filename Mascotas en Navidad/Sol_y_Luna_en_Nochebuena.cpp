#include <bits/stdc++.h>

using namespace std;

#define edl '\n'

struct evento {
    int t;
    string enunciado;
    int sensacion;
    int sujeto;
    int idx;
    bool operator<(const evento &b) const {
        if (t != b.t)
            return t < b.t;
        if (sensacion != b.sensacion)
            return sensacion < b.sensacion;
        if (sujeto != b.sujeto)
            return sujeto < b.sujeto;
        return idx < b.idx;
    }
};

void solve() {
    int n, as, bs, al, bl;
    cin >> n >> as >> bs >> al >> bl;
    vector<evento> eventos;
    for (int i = 1; i <= n; i++) {
        int t, sujeto, sensacion, x;
        string enunciado;
        cin >> t;
        bool asf = t <= as;
        bool bsc = t >= bs;
        bool alf = t <= al;
        bool blc = t >= bl;
        if (asf || alf) {
            sensacion = 0;
            int ds = as + 1 - t;
            int dl = al + 1 - t;
            x = max(ds, 0);
            sujeto = 0;
            if (x == 0 || (ds > dl && alf) || (ds == dl) && as > al) {
                sujeto = 1;
                x = dl;
            }
            enunciado = (sujeto ? "Luna" : "Sol");
            enunciado += " necesita cobija, faltaron ";
            enunciado += to_string(x);
            enunciado += " grados para no tener frio";
        } else if (bsc || blc) {
            sensacion = 2;
            int ds = t - (bs - 1);
            int dl = t - (bl - 1);
            x = max(ds, 0);
            sujeto = 0;
            if (x == 0 || (ds > dl && blc) || (ds == dl) && bs > bl) {
                sujeto = 1;
                x = dl;
            }
            enunciado = (sujeto ? "Luna" : "Sol");
            enunciado += " tuvo calor, faltaron ";
            enunciado += to_string(x);
            enunciado += " grados para no tener calor";
        } else {
            sensacion = 1;
            sujeto = 2;
            int frio = min(t - as, t - al), calor = min(bs - t, bl - t);
            if (frio < calor) {
                enunciado = "ESTAN BIEN, pero casi tuvieron frio (faltaron " + to_string(frio) + " grados)";
            } else if (frio > calor) {
                enunciado = "ESTAN BIEN, pero casi tuvieron calor (faltaron " + to_string(calor) + " grados)";
            } else {
                enunciado = "ESTAN BIEN, clima perfecto";
            }
        }
        eventos.push_back({t, enunciado, sensacion, sujeto, i});
    }
    for (auto &i : eventos) {
        cout << i.enunciado << edl;
    }
    cout << edl;
    sort(eventos.begin(), eventos.end());
    for (auto &i : eventos) {
        cout << i.idx << ' ' << i.enunciado << edl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr); // Fast I/O Setup
    int q = 1;
    while (q--) {
        solve();
    }
    return 0;
}
// By KaarLarax
