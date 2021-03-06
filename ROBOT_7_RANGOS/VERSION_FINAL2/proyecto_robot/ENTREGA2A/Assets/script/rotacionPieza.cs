using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using System.IO.Ports; // conexion mediante arduino
using System.Threading;

public class rotacionPieza : MonoBehaviour {

	public static SerialPort sp = new SerialPort("COM7", 9600);

	public Scrollbar scrollCuerpo; 		// manipulacion sliders
	public Scrollbar scrollBrazo; 		// manipulacion sliders
	public Scrollbar scrollAntebrazo;	// manipulacion sliders
	public Scrollbar scrollMano;		// manipulacion sliders
	public Scrollbar scrollpinzas;		// manipulacion sliders
	public Scrollbar pinzas;			// manipulacion sliders
	public Transform cuerpo; 			// componentes del robot
	public Transform brazo;				// componentes del robot
	public Transform antebrazo;			// componentes del robot
	public Transform mano;				// componentes del robot
	public Transform pinza1;			// componentes del robot
	public Transform pinza2;			// componentes del robot
	private float posicionPinza;
	//float timePassed = 0.0f;
	// inicializacion 
	void Start () {
		OpenConnection();
		posicionPinza = pinza1.localPosition.x;
	}

	void Update () {

		//BASE
		cuerpo.eulerAngles = new Vector3(0, scrollCuerpo.value * 180, cuerpo.eulerAngles.z);
		if (scrollCuerpo.value < 0.1) { // IZQUIERDA
			sp.Write ("a");
		} 
		else if (scrollCuerpo.value > 0.09 && scrollCuerpo.value < 0.29) { // IZQUIERDA IZQUIERDA CENTRO
			sp.Write ("b");
		} 
		else if (scrollCuerpo.value > 0.3 && scrollCuerpo.value < 0.39) { // IZQUIERDA CENTRO
			sp.Write ("c");
		}
		else if (scrollCuerpo.value > 0.4 && scrollCuerpo.value < 0.59){ // CENTRO
			
				sp.Write("d");
		}
		else if (scrollCuerpo.value > 0.6 && scrollCuerpo.value < 0.69) {// DERECHA CENTRO
			
				sp.Write("e");
		}
		else if (scrollCuerpo.value > 0.7 && scrollCuerpo.value < 0.89) { // DERECHA DERECHA CENTRO
			   sp.Write("f");
		}	
		else if (scrollCuerpo.value > 0.9) {// DERECHA
			
				sp.Write("g");
		}


			//BRAZO
			brazo.eulerAngles = new Vector3(0, cuerpo.eulerAngles.y, scrollBrazo.value * 180);
			if (scrollBrazo.value < 0.1) // IZQUIERDA
			{
				sp.Write("h");
			}
			else if (scrollBrazo.value > 0.09 && scrollBrazo.value < 0.29) // IZQUIERDA IZQUIERDA CENTRO
			{
				sp.Write("i");
			}
			else if (scrollBrazo.value > 0.3 && scrollBrazo.value < 0.39) // IZQUIERDA CENTRO
			{
				sp.Write("j");
			}
			else if (scrollBrazo.value > 0.4 && scrollBrazo.value < 0.59) // CENTRO
			{
				sp.Write("k");
			}
			else if (scrollBrazo.value > 0.6 && scrollBrazo.value < 0.69) // DERECHA CENTRO
			{
				sp.Write("l");
			}
			else if (scrollBrazo.value > 0.7 && scrollBrazo.value < 0.89) // DERECHA DERECHA CENTRO
			{
				sp.Write("m");
			}
			else if (scrollBrazo.value > 0.9) // DERECHA 
			{
				sp.Write("n");
			}

			//ANTEBRAZO
			antebrazo.eulerAngles = new Vector3(0, cuerpo.eulerAngles.y, scrollAntebrazo.value * 180+ scrollBrazo.value * 180);
			if (scrollCuerpo.value < 0.1) // IZQUIERDA
			{
				sp.Write("o");
			}
			else if (scrollAntebrazo.value > 0.09 && scrollAntebrazo.value < 0.29) // IZQUIERDA IZQUIERDA CENTRO
			{
				sp.Write("p");
			}
		else if (scrollAntebrazo.value > 0.3 && scrollAntebrazo.value < 0.39) // IZQUIERDA CENTRO
			{
				sp.Write("q");
			}
			else if (scrollAntebrazo.value > 0.4 && scrollAntebrazo.value < 0.59) // CENTRO
			{
				sp.Write("r");
			}
			else if (scrollAntebrazo.value > 0.6 && scrollAntebrazo.value < 0.69) // DERECHA CENTRO
			{
				sp.Write("s");
			}
			else if (scrollAntebrazo.value > 0.7 && scrollAntebrazo.value < 0.89) // DERECHA DERECHA CENTRO
			{
				sp.Write("t");
			}
			else if (scrollAntebrazo.value > 0.9) // DERECHA 
			{
				sp.Write("u");
			}

			//MANO
			mano.eulerAngles = new Vector3(0, cuerpo.eulerAngles.y, scrollMano.value * 180+ scrollAntebrazo.value * 180+ scrollBrazo.value * 180);
			if (scrollCuerpo.value < 0.1) // IZQUIERDA
			{
				sp.Write("w");
			}
			else if (scrollMano.value > 0.09 && scrollMano.value < 0.29) // IZQUIERDA IZQUIERDA CENTRO
			{
				sp.Write("x");
			}
			else if (scrollMano.value > 0.3 && scrollMano.value < 0.39) // IZQUIERDA CENTRO
			{
				sp.Write("y");
			}
			else if (scrollMano.value > 0.4 && scrollMano.value < 059) // CENTRO
			{
				sp.Write("z");
			}
			else if (scrollMano.value > 0.6 && scrollMano.value < 0.69) // DERECHA CENTRO
			{
				sp.Write("0");
			}
			else if (scrollMano.value > 0.7 && scrollMano.value < 0.89) // DERECHA DERECHA CENTRO
			{
				sp.Write("1");
			}
			else if (scrollMano.value > 0.9) // DERECHA
			{
				sp.Write("2");
			}


			//PINZA
			pinza1.transform.localPosition = new Vector3( scrollpinzas.value * 16.3f, pinza1.transform.localPosition.y, pinza1.transform.localPosition.z);
			pinza2.transform.localPosition = new Vector3(scrollpinzas.value * -16.3f, pinza2.transform.localPosition.y, pinza2.transform.localPosition.z);
			if (scrollpinzas.value < 0.1) // IZQUIERDA
			{
				sp.Write("3");
			}
			else if (scrollpinzas.value > 0.1 && scrollpinzas.value < 0.29) // IZQUIERDA  IZQUIERDA CENTRO
			{
				sp.Write("4");
			}
			else if (scrollpinzas.value > 0.3 && scrollpinzas.value < 0.39) // IZQUIERDA   CENTRO
			{
				sp.Write("5");
			}
			else if (scrollpinzas.value > 0.4 && scrollpinzas.value < 0.59) // CENTRO
			{
				sp.Write("6");
			}
			else if (scrollpinzas.value > 0.6 && scrollpinzas.value < 0.69) // DERECHA CENTRO
			{
				sp.Write("7");
			}
			else if (scrollpinzas.value > 0.7 && scrollpinzas.value < 0.89) // DERECHA DERECHA CENTRO
			{
				sp.Write("8");
			}
			else if (scrollpinzas.value > 0.9) // DERECHA
			{
				sp.Write("9");
			}

		}

		public void OpenConnection() 
		{
			if (sp != null) 
			{
				if (sp.IsOpen) 
				{
					sp.Close();
					print("Closing port, because it was already open!");
				}
				else 
				{
					sp.Open();  // opens the connection
					sp.ReadTimeout = 16;  // sets the timeout value before reporting error
					print("Port Opened!");
					//		message = "Port Opened!";
				}
			}
			else 
			{
				if (sp.IsOpen)
				{
					print("Port is already open");
				}
				else 
				{
					print("Port == null");
				}
			}
		}
	}

