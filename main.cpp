#include <iostream>
using namespace std;

int main() {
    int n;cout << "Quanti atleti sono in competizione?" << endl;
    cin >> n;
    string nomi[n];
    string nazionali[n];
    double tempo[n];
    int i;
    i = 0;
    for (i = 0; i <= n - 1; i++) {
        cout << "Come si chiama l'atleta numero " << i + 1 << endl;
        cin >> nomi[i];
        cout << "Di che nazionalità è 'atleta numero" << i + 1 << endl;
        cin >> nazionali[i];
        cout << "Che tempo ha fatto l'atleta numero" << i + 1 << endl;
        cin >> tempo[i];
    }
    double min;
    int m;
    m = 0;
    min = tempo[m];
    for (m = 1; m <= n - 1; m++) {
        if (min > tempo[m]) {
            min = tempo[m];
        }
    }
    cout << "Il tempo è più basso è " << min << endl;
    double max;
    int x;
    x = 0;
    max = tempo[x];
    for (x = 1; x <= n - 1; x++) {
        if (max < tempo[x]) {
            max = tempo[x];
        }
    }
    cout << "Il tempo più alto è " << max << endl;
    double somma, media;
    int s;
    s = 0;
    somma = tempo[s];
    for (s = 1; s <= n - 1; s++) {
        somma = somma + tempo[s];
    }
    media = somma / n;
    cout << "La media dei tempi è " << media << endl;
    min = media;
    int c;
    c = 0;
    cout << "Atleti con il tempo uguale o inferiore alla media" << endl;
    for (c = 0; c <= n - 1; c++) {
        if (min >= tempo[c]) {
            cout << "Atleta numero " << c + 1 << ", nome: " << nomi[c] << ",nazionale: " << nazionali[c] << ",tempo: " << tempo[c] << endl;
        }
    }
    double t;
    int u;
    u = 0;
    cout << "Con quale tempo vuoi fare un confronto?" << endl;
    cin >> t;
    cout << "Gli atleti con il tempo minore o uguale a " << t << " sono:" << endl;
    for (u = 0; u <= n - 1; u++) {
        if (t >= tempo[u]) {
            cout << "Atleta numero " << u + 1 << ", nome: " << nomi[u] << ", nazionale: " << nazionali[u] << ", tempo: " << tempo[u] << endl;
        }
    }
    return 0;
}