#include <iostream>
using namespace std;
// class drob'
class Fraction {
private:
	int nom;
	int denom;
public:
	Fraction() {
		nom = 0;
		denom = 1;
	}
	void setNom(int fnom) {nom = fnom;}
	int getNom() { return nom; }
	void setDenom(int fdenom) { denom = fdenom; }
	int getDenom() { return denom; }
	void showFraction() {
		if (nom == 0) { cout << "0"<<endl; }
		else
			if (denom == 0) cout << "Error" << endl;
			else  cout << nom << '/' << denom << endl; 
	}
	Fraction mul(Fraction b) {
		Fraction c;
		c.nom = nom * b.nom;
		c.denom = denom * b.denom;
		return c;
	}
	Fraction div(Fraction b) {
		Fraction c;
		c.nom = nom * b.nom;
		c.denom = denom * b.denom;
		return c;
	}
	Fraction add(Fraction b) {
		Fraction c;
		c.denom = denom * b.denom;
		c.nom = nom * b.denom + b.nom*denom;
		return c;
	}
	Fraction minus(Fraction b) {
		Fraction c;
		c.denom = denom * b.denom;
		c.nom = nom * b.denom - b.nom*denom;
		return c;
	}
};
int main() {
	Fraction a, b, res;
	a.setNom(1);
	a.setDenom(0);
	a.showFraction();
	res.showFraction();
	b.setNom(1);
	b.setDenom(3);
	b.showFraction();
	res = a.div(b);
	res.showFraction();

	return 0;
}