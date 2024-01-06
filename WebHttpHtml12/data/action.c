Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_link("Enter the Store", 
		"Text=Enter the Store", 
		"Snapshot=t4.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2ghBmzWW-umemo=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_image("sm_birds.gif", 
		"Src=../images/sm_birds.gif", 
		"Snapshot=t5.inf", 
		LAST);

	web_link("AV-SB-02", 
		"Text=AV-SB-02", 
		"Snapshot=t6.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t7.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2gh3cZDcNVS_yMSGQnW_zEgOZEKpBIFDSZdGCUh3cZDcNVS_yM=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t8.inf", 
		LAST);

	return 0;
}