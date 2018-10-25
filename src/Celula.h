#ifndef CELULA_H_
#define CELULA_H_


class Celula {
private:
	bool estado;
	int energia;
	double color; //mismo comentario q en color de parcela(ver parcela.h)
public:

	/*
	 * POST:VALORES A VIDA = 0 (INICIA MUERTA) ,ESTADO ES UN BOOL.
	 */
	Celula();

	/*
	 * DEVUELVE BOOL PARA TRABAJAR EN PARCELA , TRUE VIVA FALSE MUERTA
	 */
	bool obtenerEstado();

	/*
	 * RECIBE EL PARAMETRO DE LA PARCELA PARA INICIAR CON LA VIDA QUE DEBE
	 */
	void nacer(float coefNatalidad,double colorDeNacimiento);

	/*
	 * ESTADO FALSE
	 * VIDA = 0
	 */
	void matar(float coefMortalidad);
};




#endif /* CELULA_H_ */
