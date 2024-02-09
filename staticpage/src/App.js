// import logo from './logo.svg';
import './App.css';
import Header from './components/Header/Header';
import Greeting from './greeting';
import FirstPage from './pages/MainPage/Firstpage';

function App() {
  return (
    <div className="App">
      <div>
      <Header />
      <FirstPage />
      <Greeting />
      {/* Add other components and content here */}
      </div>
      {/* <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
      </header> */}
      
    <div>
      
    </div>
    </div>
  );
}

export default App;
