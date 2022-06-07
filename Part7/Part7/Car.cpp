#include <iostream>
#include <cstring>
using namespace std;

class Car { // �⺻ ���� �ڵ���

private:
	int gasolineGauge;

public:

	Car(int gas) : gasolineGauge(gas) {

		cout << "CAR ������" << endl;

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

		cout << "Hybrid ������" << endl;
	}

	int GetElecGauge() {

		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar { // ���̺긮�� ����ī

private:
	int waterGauge;

public:

	HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {

		cout << "HybridWater ������" << endl;
	}
	void ShowCureentGauge() {

		cout << "�ܿ� ���ָ� : " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ : " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ� : " << waterGauge << endl;
	}

};

int main() {

	HybridWaterCar H(79, 65, 35);
	H.ShowCureentGauge();

	return 0;
}