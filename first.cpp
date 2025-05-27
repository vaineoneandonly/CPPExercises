import std;

namespace jorge
{
	void print() { std::print("sim jorjão\n"); }
}

namespace jose
{
	void print() { std::print("sim ze\n"); }
}

namespace unit1
{
	void unit1tests()
	{
		int teste{ 42 };
		std::print("huh {}", teste);

		int cartãoPresente = 12;

		std::print("{}", cartãoPresente);

		jorge::print();
		jose::print();
	}

	void ex1()
	{
		std::println("hello, world!");
	}

	void ex2()
	{
		std::string name;
		std::cin >> name;

		int age;
		std::cin >> age;

		std::println("name: {}\nage: {}", name, age);
	}
}

namespace unit2
{
	void ex1()
	{
		int test1;
		unsigned int test2;
		long int test3;
		long long int test4;
		unsigned long long int test5;

		std::println(
			"size of test1: {}\n"
			"size of test2: {}\n"
			"size of test3 : {}\n"
			"size of test4 : {}\n"
			"size of test5 : {}", 
			sizeof(test1), 
			sizeof(test2), 
			sizeof(test3), 
			sizeof(test4), 
			sizeof(test5));
	}

	namespace ex2
	{

		const float POUNDSPERKILO{ 2.20462f };

		float kilosToPounds(float kilos) { return  kilos * POUNDSPERKILO; }
		float PoundsToKilos(float pounds) { return pounds / POUNDSPERKILO; }

		void tests()
		{
			float weightInKilos;
			std::cin >> weightInKilos;

			float weightInPounds{ weightInKilos * POUNDSPERKILO };

			std::println("weight in kgs: {} kgs\nconverted weight in pounds: {:.2f} lbs", weightInKilos, weightInPounds);

			float test2{ unit2::ex2::PoundsToKilos(110) };
			std::println("{:.2f}", test2);
		}
	}

	namespace ex3
	{
		const float PI{ 3.14159f };
		float calculateAreaOfCircle(float radius) { return PI * radius * radius; }

		void tests()
		{
			float radius{ 2.0f };
			float area{ ex3::PI * radius * radius };

			std::println("{:.2f}", area);

			float area2{ ex3::calculateAreaOfCircle(radius) };
			std::println("{:.2f}", area2);
		}
	}

	namespace ex4
	{
		float calculateTreeHeight(float angle, float distanceToTree, float eyeHeight)
		{
			float angleInRads{ angle * (unit2::ex3::PI / 180.0f) };
			float treeHeight{ eyeHeight + distanceToTree * std::tan(angleInRads) };

			std::println("tree height: {:.2f}", treeHeight);

			return treeHeight;
		}

		void tests()
		{
			float angle{ 135.0f };
			float angleInRads = angle * (unit2::ex3::PI / 180.0f);
			float distanceToTree{ 5.0f };
			float heightOfEye{ 10.0f };
			float heightOfTree{ calculateTreeHeight(angle, distanceToTree, std::tan(heightOfEye)) };

			std::println(
				"angle: {}\n"
				"distance to tree: {}\n"
				"height of eye: {}\n"
				"height of tree: {:.2f}", 
				angle, 
				distanceToTree, 
				heightOfEye, 
				heightOfTree);

			calculateTreeHeight(190.0f, 10, 1.9);
		}
	}

	namespace ex5
	{
		float calculateBMI(float weight, float height)
		{
			float bmi{ weight / (height * height) };

			std::println("{:.1f}", bmi);

			return bmi;
		}

		void tests()
		{
			float weight{ 58.0f };
			float height{ 1.73f };

			calculateBMI(weight, height);
			calculateBMI(90, 1.50);
		}
	}

	void ex7()
	{
		float over4{ static_cast<float>(std::sin(std::numbers::pi / 4)) };

		std::println(
			"base of the natural log: {}\n"
			"pi: {}\n"
			"square root of 2: {}\n"
			"golden ratio: {}\n"
			"sine of pi over 4: {:.5f}E-1",
			std::numbers::e,
			std::numbers::pi,
			std::numbers::sqrt2,
			std::numbers::phi,
			over4 * 10
		);
	}
}



int main()
{
	//unit1tests();
	//unit1::ex1();
	//unit1::ex2();
	
	//unit2::ex1();
	//unit2::ex2::tests();
	//unit2::ex3::tests();
	//unit2::ex4::tests();
	//unit2::ex5::tests();
	//unit2::ex7();

	unsigned int n1;
	unsigned int n2;

	std::cin >> n1;
	std::cin >> n2;
}

