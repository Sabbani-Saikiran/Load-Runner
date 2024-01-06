Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(8);

	web_link("Enter the Store", 
		"Text=Enter the Store", 
		"Snapshot=t3.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2ghBmzWW-umemo=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_image("sm_fish.gif", 
		"Src=../images/sm_fish.gif", 
		"Snapshot=t4.inf", 
		LAST);

	web_link("FI-SW-01", 
		"Text=FI-SW-01", 
		"Snapshot=t5.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t6.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2gh3cZDcNVS_yMSGQkjZ-_jGnPyeBIFDXK71t8h3cZDcNVS_yM=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t7.inf", 
		LAST);

	return 0;
}