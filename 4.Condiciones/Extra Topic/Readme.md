# Servidores

## Que es
Un servidor es un sistema que proporciona recursos, datos, servicios o programas a otros ordenadores, conocidos como clientes, a través de una red.

Un sistema individual puede, al mismo tiempo, proporcionar recursos y usar los de otro sistema. Esto significa que todo dispositivo podría ser a la vez cliente y servidor (**Cliente Servidor**).

## Tipos de servidor

- **Servidor web**: Guarda, organiza y entrega  páginas web  a los clientes como navegadores web o crawlers. La comunicación entre servidor (software) y cliente se basa en HTTP protocolo de transferencia de hipertexto o en HTTPS, la variante codificada. Por regla general, se transmiten documentos HTML y los elementos integrados en ellos, tales como imágenes, hojas de estilo o scripts. Los servidores web más populares son el servidor HTTP Apache, los servicios de Internet Information Server de Microsoft (ISS) o el servidor Nginx. 
 
- **Servidor de archivos**: un servidor de archivos se encarga de almacenar los datos a los que acceden los diferentes clientes a través de una red. Las empresas apuestan por dicha gestión de archivos para que sea mayor el número de grupos de trabajo que tengan acceso a los mismos datos. En el acceso al servidor de archivos por medio de Internet entran en juego protocolos de transmisión como FTP (File Transfer Protocol), SFTP (Secure File Transfer Protocol), FTPS (FTP over SSL) o SCP (Secure Copy). Los protocolos SMB (Server Message Block) y NFS (Network File System) se encuentran habitualmente en las redes de área locales (LAN).
 
- **Servidor de correo electrónico**: La interacción hace posible la recepción, el envío y el reenvío de correos electrónicos, así como su puesta a punto para que estén disponibles. Por regla general funciona mediante el protocolo de transferencia simple de correo (SMTP). Los usuarios que quieran acceder a un servidor de correo electrónico necesitan un cliente de correo electrónico que recoja los mensajes del servidor y los entregue en la bandeja de entrada, proceso que tiene lugar a través de los protocolos IMAP (Internet Message Access Protocol) o POP (Post Office Protocol).

- **Servidor de base de datos**: Pueden acceder a uno o varios sistemas de bases de datos a través de una red. Las soluciones de software con una elevada cuota de mercado son Oracle, MySQL, Microsoft SQL Server, PostgreSQL y DB2. Los servidores de bases de datos ayudan a los servidores web, por regla general, a la hora de almacenar y entregar datos.

# Cliente

Es un ordenador o software que accede a un servidor y recupera servicios especiales o datos de él. Es tarea del cliente estandarizar las solicitudes, transmitirlas al servidor y procesar los datos obtenidos. Un cliente no ejecuta tareas de servidor, sino que es simplemente un elemento intermedio. Los clientes típicos son los navegadores web o los clientes de correo electrónico.

## Tipos de clientes

- **Sistemas operativos**: acceso al servidor a través de la línea de comandos utilizando el protocolo Telnet
- **Navegador web**: La comunicación entre el servidor y el navegador se realiza a través del protocolo HTTP. El navegador finalmente evalúa los documentos HTML recibidos o las aplicaciones JavaScript.
- **Clientes de correo electrónico**: Incluso la recuperación de correos electrónicos desde un servidor se realiza con una función de cliente. Los protocolos comunes son POP3, SMTP o IMAP

# Codigos HTTP

## Codigos 200
### 200 OK
La solicitud ha tenido éxito. El significado de un éxito varía dependiendo del método HTTP:
### 201 Created
La solicitud ha tenido éxito y se ha creado un nuevo recurso como resultado de ello. Ésta es típicamente la respuesta enviada después de una petición PUT.
### 202 Accepted
La solicitud se ha recibido, pero aún no se ha actuado. Es una petición "sin compromiso", lo que significa que no hay manera en HTTP que permite enviar una respuesta asíncrona que indique el resultado del procesamiento de la solicitud. Está pensado para los casos en que otro proceso o servidor maneja la solicitud, o para el procesamiento por lotes.
### 203 Non-Authoritative Information
La petición se ha completado con éxito, pero su contenido no se ha obtenido de la fuente originalmente solicitada, sino que se recoge de una copia local o de un tercero. Excepto esta condición, se debe preferir una respuesta de 200 OK en lugar de esta respuesta.
### 204 No Content (en-US)
La petición se ha completado con éxito pero su respuesta no tiene ningún contenido, aunque los encabezados pueden ser útiles. El agente de usuario puede actualizar sus encabezados en caché para este recurso con los nuevos valores.

## Codigos 400

### 400 Bad Request
Esta respuesta significa que el servidor no pudo interpretar la solicitud dada una sintaxis inválida.
### 401 Unauthorized
Es necesario autenticar para obtener la respuesta solicitada. Esta es similar a 403, pero en este caso, la autenticación es posible.
### 402 Payment Required
Este código de respuesta está reservado para futuros usos. El objetivo inicial de crear este código fue para ser utilizado en sistemas digitales de pagos. Sin embargo, no está siendo usado actualmente.
### 403 Forbidden
El cliente no posee los permisos necesarios para cierto contenido, por lo que el servidor está rechazando otorgar una respuesta apropiada.
### 404 Not Found
El servidor no pudo encontrar el contenido solicitado. Este código de respuesta es uno de los más famosos dada su alta ocurrencia en la web.

## Codigos 500

### 500 Internal Server Error
El servidor ha encontrado una situación que no sabe cómo manejarla.
### 501 Not Implemented (en-US)
El método solicitado no está soportado por el servidor y no puede ser manejado. Los únicos métodos que los servidores requieren soporte (y por lo tanto no deben retornar este código) son GET y HEAD.
### 502 Bad Gateway
Esta respuesta de error significa que el servidor, mientras trabaja como una puerta de enlace para obtener una respuesta necesaria para manejar la petición, obtuvo una respuesta inválida.
### 503 Service Unavailable
El servidor no está listo para manejar la petición. Causas comunes puede ser que el servidor está caído por mantenimiento o está sobrecargado. Hay que tomar en cuenta que junto con esta respuesta, una página usuario-amigable explicando el problema debe ser enviada. Estas respuestas deben ser usadas para condiciones temporales y el encabezado HTTP Retry-After: debería, si es posible, contener el tiempo estimado antes de la recuperación del servicio. El webmaster debe también cuidar los encabezados relacionados al caché que son enviados junto a esta respuesta, ya que estas respuestas de condición temporal deben usualmente no estar en el caché.
### 504 Gateway Timeout
Esta respuesta de error es dada cuando el servidor está actuando como una puerta de enlace y no puede obtener una respuesta a tiempo.

[HTTP Codes](https://developer.mozilla.org/es/docs/Web/HTTP/Status)

[HTTP Codes Cats](https://http.cat/)