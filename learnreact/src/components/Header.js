// Header.js
import React from 'react';
import './header.css';

const Header = () => {
  const scrollToSection = (sectionId) => {
    const section = document.getElementById(sectionId);
    if (section) {
      section.scrollIntoView({ behavior: 'smooth' });
    }
  };

  return (
    <nav>
      <a href="#" onClick={() => scrollToSection('home')}>
        🏠 Home
      </a>
      <a href="#" onClick={() => scrollToSection('about')}>
        ℹ️ About
      </a>
      <a href="#" onClick={() => scrollToSection('contact')}>
        ✉️ Contact
      </a>
      <a href="#" onClick={() => scrollToSection('socialLinks')}>
        🔗 Social Media links
      </a>
    </nav>
  );
};

export default Header;
