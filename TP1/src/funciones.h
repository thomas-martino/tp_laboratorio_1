
#ifndef FUNCIONES_H_
#define FUNCIONES_H_



#endif /* FUNCIONES_H_ */

	/** \brief Ingreso de km
	 *
	 * \param x, Kilometros
	 * \return
	 *
	 */
	void funKm(int* x);

	/** \brief Se ingresan los precios
	 *
	 * \param y, precio aerolineas
	 * \param z, precio latam
	 * \return
	 *
	 */
    void ingPrecio(float* y, float* z);

    /** \brief Calcula los costos que requieren una multiplicacion (debito y credito)
     *
     * \param precio, es el valor del precio con el que voy a calcular
     * \param precioPuntero, es la direccion de memoria donde voy a guardar el dato calculado
     * \param valorOP, valor por el cual se va a hacer el calculo.
     * \return
     *
     */
    void calcularMulti(float precio, float* precioPuntero, float valorOp);

    /** \brief Calcula los costos que requieren una division (precio btc y valor unitario)
     *
     * \param precio, es el valor del precio con el que voy a calcular
     * \param precioPuntero, es la direccion de memoria donde voy a guardar el dato calculado
     * \param valorOP, valor por el cual se va a hacer el calculo.
     * \return
     *
     */
    void calcularDiv(float precio, float* precioPuntero, float valorOp);

    /** \brief Calcula la diferencia de precios
     *
     * \param precioUno, es un valor a restar
     * \param precioDos, es el valor al cual se le va a restar precioUno
     * \param diferencia, es la direccion de memoria donde va a ser guardado el resultado
     * \return
     *
     */
    void calcularDif(float precioUno,float* diferencia, float precioDos);

    /** \brief despliega el menu en pantalla
     * \return
     *
     */
    void menu();
