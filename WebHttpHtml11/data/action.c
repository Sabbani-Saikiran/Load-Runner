Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_link("Enter the Store", 
		"Text=Enter the Store", 
		"Snapshot=t2.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2ghBmzWW-umemo=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(7);

	web_image("sm_birds.gif", 
		"Src=../images/sm_birds.gif", 
		"Snapshot=t3.inf", 
		LAST);

	web_link("AV-CB-01", 
		"Text=AV-CB-01", 
		"Snapshot=t4.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t5.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2gh3cZDcNVS_yMSGQnYLAkiFaax1RIFDYspO10h3cZDcNVS_yM=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t6.inf", 
		LAST);

	return 0;
}