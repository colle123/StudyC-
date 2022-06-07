#include <iostream>
#include <cstring>
using namespace std;

class Car { // 기본 연료 자동차

private:
	int gasolineGauge;

public:

	Car(int gas) : gasolineGauge(gas) {

		cout << "CAR 생성자" << endl;

	};
	
	int GetGasGauge() {

		return gasolineGauge;
	}
};

class HybridCar : public Car {

private:
	int electricGauge;
	
public:

	HybridCar(int gas, int elec) : Car(gas), electricGauge(elec) {

		cout << "Hybrid 생성자" << endl;
	}

	int GetElecGauge() {

		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar { // 하이브리드 워터카

private:
	int waterGauge;

public:

	HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {

		cout << "HybridWater 생성자" << endl;
	}
	void ShowCureentGauge() {

		cout << "잔여 가솔린 : " << GetGasGauge() << endl;
		cout << "잔여 전기량 : " << GetElecGauge() << endl;
		cout << "잔여 워터량 : " << waterGauge << endl;
	}

};

int main() {

	HybridWaterCar H(79, 65, 35);
	H.ShowCureentGauge();

	return 0;
}