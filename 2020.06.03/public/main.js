const socket = io();

const temperatureDisplay = document.getElementById('temperature');

socket.on('temp', function (data) {
  console.log(data);
  temperature.innerHTML = `${data}°C`;
if (data > 29) {

  ventilador.innerHTML = `ON`
} else {
  ventilador.innerHTML = `OFF`
}



});
