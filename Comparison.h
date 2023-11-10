#pragma once

template <typename Type1, typename Type2>

class Comparison {
public:
	Comparison(Type1 num1, Type2 num2) : num1_(num1), num2_(num2){}

	template <typename Type>
	Type Min() {
		if (num1_ > num2_) {
			return static_cast<Type>(num2_);
		}
		else if (num2_ > num1_) {
			return static_cast<Type>(num1_);
		}

		return 0;
	}

private:
	Type1 num1_;
	Type2 num2_;
};
