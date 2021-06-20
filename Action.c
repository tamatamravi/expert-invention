Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/img/glyphicons-halflings.png", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=Buenos Aires", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_submit_form("purchase.php", 
		"Ordinal=2", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		LAST);

	web_submit_form("confirmation.php", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=cash", ENDITEM, 
		"Name=address", "Value=123 main", ENDITEM, 
		"Name=city", "Value=us", ENDITEM, 
		"Name=state", "Value=usa", ENDITEM, 
		"Name=zipCode", "Value=12345", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=12345", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2017", ENDITEM, 
		"Name=nameOnCard", "Value=jhon", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	return 0;
}