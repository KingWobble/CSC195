#pragma once
#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

namespace mathlib {
	template<typename T = int>
	class Fraction {
	private:
		T numerator;
		T denominator;
		void simplify();
	public:
		Fraction(T num = 0, T denom = 1);

		
		double toDouble() const;

		Fraction operator+ (const Fraction& other) const;
		Fraction operator- (const Fraction& other) const;
		Fraction operator* (const Fraction& other) const;
		Fraction operator/ (const Fraction& other) const;

		bool operator== (const Fraction& other) const;
		bool operator!= (const Fraction& other) const;
		bool operator< (const Fraction& other) const;
		bool operator> (const Fraction& other) const;
		bool operator<= (const Fraction& other) const;
		bool operator>= (const Fraction& other) const;

		template<typename U>
		friend std::ostream& operator << (std::ostream& os, const Fraction<U>& f);

		template<typename U>
		friend std::istream& operator >> (std::istream& is, Fraction<U>& f);

	};


	template<typename T>
	Fraction<T>::Fraction(T num, T denom) : numerator(num), denominator(denom) {
		if (denominator == 0)
			denominator = 1;
		simplify();
	}
	
	template<typename T>
	void Fraction<T>::simplify() {
		T a = numerator, b = denominator;
		while (b != 0) {
			T temp = b;
			b = a % b;
			a = temp;
		}

		numerator /= a;
		denominator /= a;
		if (denominator < 0) {
			numerator = -numerator;
			denominator = -denominator;
		}
	}

	template<typename T>
	double Fraction<T>::toDouble() const {
		return static_cast<double> (numerator) / denominator;
	}

	template<typename T>
	Fraction<T> Fraction<T>::operator+(const Fraction& other) const {
		return Fraction(numerator * other.denominator + other.numerator * denominator,
			denominator * other.denominator);
	}

	template<typename T>
	Fraction<T> Fraction<T>::operator-(const Fraction& other) const {
		return Fraction(numerator * other.denominator - other.numerator * denominator,
			denominator * other.denominator);
	}

	template<typename T>
	Fraction<T> Fraction<T>::operator*(const Fraction& other) const {
		return Fraction(numerator * other.numerator, denominator * other.denominator);
	}

	template<typename T>
	 Fraction<T> Fraction<T>::operator/(const Fraction& other) const {
		return Fraction(numerator * other.denominator, denominator * other.numerator);
	}

	template<typename T>
	bool Fraction<T>::operator==(const Fraction& other) const {
		return numerator == other.numerator && denominator == other.denominator;
	}

	template<typename T>
	bool Fraction<T>::operator!=(const Fraction& other) const {
		return !(*this == other);
	}

	template<typename T>
	bool Fraction<T>::operator<(const Fraction& other) const {
		return numerator * other.denominator < other.numerator * denominator;
	}

	template<typename T>
	bool Fraction<T>::operator>(const Fraction& other) const {
		return other < *this;
	}

	template<typename T>
	bool Fraction<T>::operator<=(const Fraction& other) const {
		return !(*this > other);
	}

	template<typename T>
	bool Fraction<T>::operator>=(const Fraction& other) const {
		return !(*this < other);
	}

	template<typename U>
	std::ostream& operator <<(std::ostream& os, const Fraction<U>& f) {
		os << f.numerator << "/" << f.denominator;
		return os;
	}

	template<typename U>
	std::istream& operator >> (std::istream& is, Fraction<U>& f) {
		char slash;
		is >> f.numerator >> slash >> f.denominator;
		if (f.denominator == 0) f.denominator = 1;
		
		f.simplify();

		return is;
	}
}

#endif

