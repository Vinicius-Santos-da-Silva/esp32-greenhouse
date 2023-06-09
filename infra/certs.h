#ifndef certs_h
#define certs_h
// CA raiz da Amazon. Isso deve ser igual para todos.
const char AWS_CERT_CA[] = "-----BEGIN CERTIFICATE-----\n" \
"MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n" \
"ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n" \
"b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n" \
"MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n" \
"b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n" \
"ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n" \
"9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n" \
"IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n" \
"VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n" \
"93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n" \
"jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n" \
"AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n" \
"A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n" \
"U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n" \
"N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n" \
"o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XUv\n" \
"5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n" \
"rqXRfboQnoZsG4q5WTP468SQvvG5\n" \
"-----END CERTIFICATE-----\n";
// A chave privada do seu dispositivo
const char AWS_CERT_PRIVATE[] = "-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEpAIBAAKCAQEAsa6gXdL5DID3jEN2hLIrxEEe3fcY/1Sfg9VAm4JPYnHR2PaJ\n" \
"hQPtTTGPz6Nv8im7R1ztapg1AwLa86deOmuUsKX9esJ1Fd+b4doPZVU7/wrTAxos\n" \
"uPWANTk0Dd/bBOggfGGE+kpCDZFYZjq4rc2Z0a/nEi+a0ugdzyZDZV1GY9bWogZY\n" \
"ODcfycbYvCb7a+Jjw5hvOPngk3OZ2IYGwE5EtBCUIjyP3vBG7drg3cjRTzPUb+L6\n" \
"NHsBplWDAR4F6aYHPdfjDgAkMLXyiL6h3qQTLqPHBtACkGa5GGNP6ID6I406z7+8\n" \
"oXqXSPJHkNrYHOOfAVw1krLL+yi8Q+CNmfwssQIDAQABAoIBAQCW6Xm9lsX+z77x\n" \
"fA86z1WK/8BmyEuL+eTuBP811az1MTUJsQPGXTp9GP5LXkZjiPxOtWfU5GgKIa+z\n" \
"yNCoj90fWCx9ypHFvUFZx2rSJ12o1hm5Bc88XQ/CpM5Ihnwwo7OL0QwvxUhq26sY\n" \
"UQGwZPMjfOKmuJYoUguXeKk/e8SgYFp0gUZBf4ndQGzB2TB7a4413Lww57hAmYRQ\n" \
"WSqEbO1Zv8hrDklAEI7v8IwQuFizK6ArSUDJ9ddwW2vsWZ6OkYHok2KkALX2GrF9\n" \
"eAmazDPxGiu36frrfcCXOgTGbmtP7uTUrvUZVCvHTBNab5rU8XiWaSTJ7NLOfJxH\n" \
"razGACERAoGBAOVqADj+8PliQsPLLJNlg9tIturCmck37UmltLqE7jijL4MZ3OVP\n" \
"TzUuYwJCvj5tnGLQ1/rrcprB9ZcyGlm24nEtqdKGMXmu2tUVWwqy/OHjcv3IKeTt\n" \
"nNkAAEnBU+gfqBE3Wxvc6XS+icK16nATTg+envrlwcn1Tgtys61qNB7dAoGBAMZF\n" \
"5pGQKUjMJJ4946TTrFQlFbnqNEi2sZwSEKyP5BHww1P0fQ/0trspsja6VOvECBjs\n" \
"XtDIYj0vvanUuCay/ve3Mx9iQjIbrd7z52xsLxxxzwmdCHpDqYUxrKtkaFvOZb2i\n" \
"G3wdwr/kbV9kpnl74mdzxCxFVaa/YoWQ1q+5B0XlAoGBAJeP9T+yZj9LxHIX64Yh\n" \
"fgBERNxJ3lHKihCq0gCby8pNPRlu37n7MIgg8jZPI+KYhcXe1aGnJVrKo1bVOgVl\n" \
"RqqhEV3NXChY9afq6O/jmiAeJR02vT7KIGJYltgjSizDpURifuWkh/Oh4d9qUczj\n" \
"ZCH7mGqHmgSz9HCpwbziujZdAoGAGmfExS4F0YQefFSRtKncEXi+4/uk6uopzTc6\n" \
"sUCYhyshWFT/MtjMXTC4Y0F9fcilq2wPVI7bRnrNL4j83WqJOkRTsqJLXpEBHugs\n" \
"sevWeltNz2HydxX7xZlP/aNpopBiTFcCgg0Umqm5RzMIWLV++XgZcCvrtEFYxaD8\n" \
"dnqV1WECgYACrs/TzHs4MzltZbJQ1vRYsJEwo/wcE6qzyC/guO4sPKXX/i8gp3vc\n" \
"cN0I9utaQDB/nhGEo78hfIGgYL+ucQV+D018JYpgEZwiJNaKiKab9b7fUPiAuJpV\n" \
"OZM2fclaWxrGkEyTVYHGEXLtXYcLCiuhZZ3jTheVAKkdkKCemQDPVg==\n" \
"-----END RSA PRIVATE KEY-----\n";


// O certificado para o seu dispositivo
const char AWS_CERT_CRT[] = "-----BEGIN CERTIFICATE-----\n" \
"MIIDWTCCAkGgAwIBAgIUO0eQZnAF5JsA+7DNQkeNVK+gJicwDQYJKoZIhvcNAQEL\n" \
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n" \
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIzMDUxMzE2MTc0\n" \
"N1oXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n" \
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALGuoF3S+QyA94xDdoSy\n" \
"K8RBHt33GP9Un4PVQJuCT2Jx0dj2iYUD7U0xj8+jb/Ipu0dc7WqYNQMC2vOnXjpr\n" \
"lLCl/XrCdRXfm+HaD2VVO/8K0wMaLLj1gDU5NA3f2wToIHxhhPpKQg2RWGY6uK3N\n" \
"mdGv5xIvmtLoHc8mQ2VdRmPW1qIGWDg3H8nG2Lwm+2viY8OYbzj54JNzmdiGBsBO\n" \
"RLQQlCI8j97wRu3a4N3I0U8z1G/i+jR7AaZVgwEeBemmBz3X4w4AJDC18oi+od6k\n" \
"Ey6jxwbQApBmuRhjT+iA+iONOs+/vKF6l0jyR5Da2BzjnwFcNZKyy/sovEPgjZn8\n" \
"LLECAwEAAaNgMF4wHwYDVR0jBBgwFoAUYWDbaC6ob+r2rCnc6cZftL/8X7swHQYD\n" \
"VR0OBBYEFLlU2dDaLOu5rd5bXIOV6NHOJg/UMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n" \
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCwdAc54X5/f5dQReYRIRfkmJTR\n" \
"T96LmoLmqeE9v9Q02Ve/idSjoNCKDMJaQlj0t1G14jPDIrbveGrVOk3xkpXBxbPc\n" \
"nO6kBXQ4dWRNL+/YhhYCyV/TvZ0sUzOqjgqoPy5BByhEhjT9rDN5UMCbgAMp8l6k\n" \
"hBN9x30+X/TktsG0zOWfWP4IZl41wsCnZjKzUwmzBuAEAAMLpwpxW8ONLQYWFrMP\n" \
"jgTA2vixFXmjklv712fKYlmNK07h0pzMhymFF5NDdYa3gXvdXAaQhk/x3bgDaDBd\n" \
"0bY11sgnEdvjFg+Hwz/a+M+r5vReEN+ViY9sZrH3vNdAUI6ToRZ0S0UuxAPc\n" \
"-----END CERTIFICATE-----\n";
#endif