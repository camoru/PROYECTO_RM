using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

// ROBOT RICARDO
public class rotacionPieza : MonoBehaviour {

    public Scrollbar scrollCuerpo;
    public Scrollbar scrollBrazo;
    public Scrollbar scrollAntebrazo;
    public Scrollbar scrollMano;
    public Scrollbar scrollpinzas;
    public Scrollbar pinzas;
    public Transform cuerpo;
    public Transform brazo;
    public Transform antebrazo;
    public Transform mano;
    public Transform pinza1;
    public Transform pinza2;
    private float posicionPinza;
    // Use this for initialization
    void Start () {
        posicionPinza = pinza1.localPosition.x;
	}
	
	// Update is called once per frame
	void Update () {

        //cuerpo.eulerAngles.y = scrollCuerpo.value * 180; ;

        cuerpo.eulerAngles = new Vector3(0, scrollCuerpo.value * -180, cuerpo.eulerAngles.z);
        brazo.eulerAngles = new Vector3(0, cuerpo.eulerAngles.y, scrollBrazo.value * 180);
        antebrazo.eulerAngles = new Vector3(0, cuerpo.eulerAngles.y, scrollAntebrazo.value * 180+ scrollBrazo.value * 180);
        mano.eulerAngles = new Vector3(0, cuerpo.eulerAngles.y, scrollMano.value * 180+ scrollAntebrazo.value * 180+ scrollBrazo.value * 180);



        //cuerpo.Rotate(new Vector3(0, scrollCuerpo.value * 180, cuerpo.eulerAngles.z));
        //brazo.Rotate(new Vector3(0, 0, scrollBrazo.value * 180));
        //antebrazo.Rotate(new Vector3(0, 0, scrollAntebrazo.value * 180));
        //mano.Rotate(new Vector3(0, 0, scrollMano.value * 180));

        
        pinza1.transform.localPosition = new Vector3( scrollpinzas.value * 20.3f, pinza1.transform.localPosition.y, pinza1.transform.localPosition.z);
        pinza2.transform.localPosition = new Vector3(scrollpinzas.value * -20.3f, pinza2.transform.localPosition.y, pinza2.transform.localPosition.z);


    }
}

// ROBOT ALVARO
public class rotacionPieza2 : MonoBehaviour {

	public Scrollbar scrollCuerpo2;
	public Scrollbar scrollBrazo2;
	public Scrollbar scrollAntebrazo2;
	public Scrollbar scrollMano2;
	public Scrollbar scrollpinzas2;
	public Scrollbar pinzas2;
	public Transform cuerpo2;
	public Transform brazo2;
	public Transform antebrazo2;
	public Transform mano2;
	public Transform pinza1_2;
	public Transform pinza2_2;
	private float posicionPinzas;
	// Use this for initialization
	void Start () {
		posicionPinzas = pinza1_2.localPosition.x;
	}

	// Update is called once per frame
	void Update () {

		cuerpo2.eulerAngles = new Vector3(0, scrollCuerpo2.value * -360, cuerpo2.eulerAngles.z);
		brazo2.eulerAngles = new Vector3(0, cuerpo2.eulerAngles.y, scrollBrazo2.value * 180);
		antebrazo2.eulerAngles = new Vector3(0, cuerpo2.eulerAngles.y, scrollAntebrazo2.value * 180+ scrollBrazo2.value * 180);
		mano2.eulerAngles = new Vector3(0, cuerpo2.eulerAngles.y, scrollMano2.value * 180+ scrollAntebrazo2.value * 180+ scrollBrazo2.value * 180);

		pinza1_2.transform.localPosition = new Vector3( scrollpinzas2.value * 20.3f, pinza1_2.transform.localPosition.y, pinza1_2.transform.localPosition.z);
		pinza2_2.transform.localPosition = new Vector3(scrollpinzas2.value * -20.3f, pinza2_2.transform.localPosition.y, pinza2_2.transform.localPosition.z);


	}
}