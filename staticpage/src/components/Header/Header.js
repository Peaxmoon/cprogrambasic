import React from 'react';
import { FaHome, FaUser, FaCode, FaBriefcase, FaEnvelope, FaFacebook, FaTwitter, FaLinkedin, FaCloud } from 'react-icons/fa';
import './Header.css';

const Header = () => {
  return (
    <div className="header">
      <div className="logo">
        {/* Your logo image or text goes here */}
        <span>Sujjal💀</span>
      </div>
      <div className="navigation">
        <ul>
          <li><a href="#home"><FaHome /> Home</a></li>
          <li><a href="#about"><FaUser /> About</a></li>
          <li><a href="#skills"><FaCode /> Skills</a></li>
          <li><a href="#services"><FaBriefcase /> Services</a></li>
          <li><a href="#contact"><FaEnvelope /> Contact</a></li>
          <li><a href="#contact"><FaCloud /> presence</a></li>
        </ul>
      </div>
      <div className="social-media">
        {/* Add your social media links here with icons */}
        <a href="https://youtu.be/ZH0u7J8Vev4?si=bkiqVyze6vHUQkr7"><FaFacebook /></a>
        <a href="#twitter"><FaTwitter /></a>
        <a href="#linkedin"><FaLinkedin /></a>
      </div>
    </div>
  );
};

export default Header;
