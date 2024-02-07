//Maincontent.js
import React from 'react';
import About from './About';
import Contact from './Contact';
import SocialLinks from './SocialLinks';


const MainContent = () => {
  return (
    <main>
      <section className="hero">
        <h1>Welcome to Your Website</h1>
        <p>Explore and discover amazing content.</p>
      </section>

      <section className="features">
        <div className="feature">
          <h2>Responsive Design</h2>
          <p>Your website looks great on all devices.</p>
        </div>
        <div className="feature">
          <h2>Clean Code</h2>
          <p>Well-organized and readable codebase.</p>
        </div>
        <div className="feature">
          <h2>Optimized Images</h2>
          <p>Fast loading times with optimized images.</p>
        </div>
      </section>
      <section className="features">
        <div className="feature">
          <h2>Responsive Design</h2>
          <p>Your website looks great on all devices.</p>
        </div>
        <div className="feature">
          <h2>Clean Code</h2>
          <p>Well-organized and readable codebase.</p>
        </div>
        <div className="feature">
          <h2>Optimized Images</h2>
          <p>Fast loading times with optimized images.</p>
        </div>
      </section><section className="features">
        <div className="feature">
          <h2>Responsive Design</h2>
          <p>Your website looks great on all devices.</p>
        </div>
        <div className="feature">
          <h2>Clean Code</h2>
          <p>Well-organized and readable codebase.</p>
        </div>
        <div className="feature">
          <h2>Optimized Images</h2>
          <p>Fast loading times with optimized images.</p>
        </div>
      </section><section className="features">
        <div className="feature">
          <h2>Responsive Design</h2>
          <p>Your website looks great on all devices.</p>
        </div>
        <div className="feature">
          <h2>Clean Code</h2>
          <p>Well-organized and readable codebase.</p>
        </div>
        <div className="feature">
          <h2>Optimized Images</h2>
          <p>Fast loading times with optimized images.</p>
        </div>
      </section>
      <section id="about">
         <About />
      </section>
      <section id="contact">
      <Contact />
      </section>
      <section id="socialLinks">
      <SocialLinks />
      </section>
      
    </main>
  );
};

export default MainContent;
