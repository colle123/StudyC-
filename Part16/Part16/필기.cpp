/*
dynamic_cast를 많이 쓰고, reinterpret_cast는 무조건 형변환을 하는 명령어 

dynamic_cast = 상속관계에 있는 유도 클래스의 포인터 및 참조형 데이터를 기초 클래스의 포인터 및 참조형 데이터로 형변환

static_cast는 dynamic_cast 보다는 많은 형 변환을 허용하지만 안정성이 낮아지기 때문에 dynamic_cast보다 제한적으로 사용해야 함.
*/