#pragma once

class Bomber
{
private:
	int anchoAvatar;
	int altoAvatar;

	float posicionX;
	float posicionY;

	float velocidadX;
	float velocidadY;
public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar;}

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }


	void move(float _velocidadX, float velocidadY) {};

	float getPosicionX() { return posicionX; }
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }

	float getPosiconY() { return posicionY; }
	void setPosicionY(float _posicionY) { posicionY = _posicionY; }


	float getVelocidadX() { return velocidadX; }
	void setVelocidadX(float _velocidadX) { velocidadX = _velocidadX; }

	float getVelocidadY() { return velocidadY; }
	void setVelocidadY(float _velocidadY) { velocidadY = _velocidadY; }

	void Morir();
	void Correr();
	void Colocar();
};

//video 3 1:32:08
