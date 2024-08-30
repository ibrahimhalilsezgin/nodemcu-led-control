import { useState } from 'react';
import axios from 'axios';
function App() {

  const openLed = async (led) => {
      await axios.get(`http://192.168.1.107/ON${led}`); // change IP addresss
      console.log(`${led} yandı`);
  };

  
  const closeLed = async (led) => {
    await axios.get(`http://192.168.1.107/OFF${led}`); // change IP addresss
    console.log(`${led} söndü`);

  }

  return (
<>
<h1 className='text-2xl text-center items-center'>Nodemcu ESP8266 LED Kontrol</h1>

<div className='h-screen flex flex-wrap items-center justify-center space-x-4 text-white'>
    
    <div class="card bg-base-100 w-96 border border-red-300">
        <div class="card-body">
        <h2   class="card-title">Led 0</h2>
      <div class="card-actions justify-end">
        <button class="btn btn-primary" onClick={() => openLed(0)}>Yak</button>
        <button class="btn btn-primary" onClick={() => closeLed(0)}>Söndür</button>
      </div>
      </div>
    </div>
    <div class="card bg-base-100 w-96 border border-red-300">
        <div class="card-body">
        <h2   class="card-title">Led 1</h2>
      <div class="card-actions justify-end">
        <button class="btn btn-primary" onClick={() => openLed(1)}>Yak</button>
        <button class="btn btn-primary" onClick={() => closeLed(1)}>Söndür</button>
      </div>
      </div>
    </div>   
    <div class="card bg-base-100 w-96 border border-red-300">
        <div class="card-body">
        <h2   class="card-title">Led 2</h2>
      <div class="card-actions justify-end">
        <button class="btn btn-primary" onClick={() => openLed(2)}>Yak</button>
        <button class="btn btn-primary" onClick={() => closeLed(2)}>Söndür</button>
      </div>
      </div>
    </div>   
</div>
</>

  )
}

export default App
